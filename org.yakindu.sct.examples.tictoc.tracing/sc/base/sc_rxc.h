/** Generated by YAKINDU Statechart Tools code generator. */

#ifndef SC_RXC_H_
#define SC_RXC_H_

#include "sc_types.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef void* sc_object_ref;

typedef struct sc_observer sc_observer;

typedef void (*sc_observer_next_fp)(sc_object_ref, void*);

struct sc_observer {
	sc_object_ref observer;
	sc_observer_next_fp next;
};


typedef struct sc_observable sc_observable;

struct sc_observable {
	sc_uinteger observer_count;
	sc_observer** observers;
};


#define SC_OBSERVER_INIT(OBSERVER, HANDLER, NEXTFUNC) \
	(OBSERVER)->observer  = (HANDLER);\
	(OBSERVER)->next = (sc_observer_next_fp)(NEXTFUNC);


#define SC_OBSERVER_SUBSCRIBE(OBSERVABLE, OBSERVER) \
	if ((OBSERVER)->next != sc_null) { \
		sc_uinteger _OBS_IDX_; \
		for (_OBS_IDX_ = 0; _OBS_IDX_<(OBSERVABLE)->observer_count; _OBS_IDX_++) { \
			if (((OBSERVABLE)->observers[_OBS_IDX_]) == sc_null) { \
				((OBSERVABLE)->observers[_OBS_IDX_]) = (OBSERVER); \
				_OBS_IDX_ = (OBSERVABLE)->observer_count; \
			} \
		} \
	}


#define SC_OBSERVER_UNSUBSCRIBE(OBSERVABLE, OBSERVER) \
	if ((OBSERVER)->next != sc_null) { \
		sc_uinteger _OBS_IDX_; \
		for (_OBS_IDX_ = 0; _OBS_IDX_<(OBSERVABLE)->observer_count; _OBS_IDX_++) { \
			if (((OBSERVABLE)->observers[_OBS_IDX_]) == (OBSERVER)) { \
				((OBSERVABLE)->observers[_OBS_IDX_]) = sc_null; \
				_OBS_IDX_ = (OBSERVABLE)->observer_count; \
			} \
		} \
	}


#define SC_OBSERVER_NEXT(OBSERVER, ITEM) \
	if ((OBSERVER) != sc_null && (OBSERVER)->next != sc_null) {\
		(OBSERVER)->next((OBSERVER)->observer, ITEM);\
	}


#define SC_OBSERVABLE_INIT(OBSERVABLE) \
	(OBSERVABLE)->observer_count = 0;\
	(OBSERVABLE)->observers = sc_null;


#define SC_OBSERVABLE_INIT_OBSERVERS(OBSERVABLE, OBSERVERS) \
	(OBSERVABLE)->observer_count = (sc_uinteger)(sizeof(OBSERVERS)/sizeof(sc_observer*));\
	(OBSERVABLE)->observers = (OBSERVERS); \
	{\
		sc_uinteger _OBS_IDX_; \
		for (_OBS_IDX_ = 0; _OBS_IDX_<(OBSERVABLE)->observer_count; _OBS_IDX_++) {\
			((OBSERVABLE)->observers[_OBS_IDX_]) = sc_null;\
		}\
	}


#define SC_OBSERVABLE_SUBSCRIBE(OBSERVABLE, OBSERVERS) \
	(OBSERVABLE)->observer_count = (sc_uinteger)(sizeof(OBSERVERS)/sizeof(sc_observer*));\
	(OBSERVABLE)->observers = (OBSERVERS);


#define SC_OBSERVABLE_NEXT(OBSERVABLE, ITEM) \
	{\
		sc_uinteger _OBS_IDX_; \
		for (_OBS_IDX_ = 0; _OBS_IDX_<(OBSERVABLE)->observer_count; _OBS_IDX_++) {\
			SC_OBSERVER_NEXT(((OBSERVABLE)->observers[_OBS_IDX_]), (ITEM));\
		}\
	}


#ifdef __cplusplus
}
#endif

		
#endif /* SC_RXC_H_ */
