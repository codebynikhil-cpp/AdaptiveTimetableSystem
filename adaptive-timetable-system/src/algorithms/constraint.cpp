adaptive-timetable-system
├── src
│   ├── core
│   │   ├── scheduler.cpp
│   │   ├── scheduler.hpp
│   │   ├── timetable.cpp
│   │   └── timetable.hpp
│   ├── models
│   │   ├── course.cpp
│   │   ├── course.hpp
│   │   ├── room.cpp
│   │   ├── room.hpp
│   │   ├── teacher.cpp
│   │   └── teacher.hpp
│   ├── algorithms
│   │   ├── genetic.cpp
│   │   ├── genetic.hpp
│   │   ├── constraint.cpp
│   │   └── constraint.hpp
│   ├── utils
│   │   ├── logger.cpp
│   │   ├── logger.hpp
│   │   ├── config.cpp
│   │   └── config.hpp
│   ├── analytics
│   │   ├── metrics.cpp
│   │   ├── metrics.hpp
│   │   ├── reporter.cpp
│   │   └── reporter.hpp
│   └── web
│       ├── dashboard.cpp
│       ├── dashboard.hpp
│       ├── server.cpp
│       └── server.hpp
├── include
│   └── external
├── tests
│   ├── core_tests.cpp
│   ├── model_tests.cpp
│   └── algorithm_tests.cpp
├── CMakeLists.txt
└── README.md