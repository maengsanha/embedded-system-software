- driver name:  dev_driver
- major number: 242

To run, do

  insmod dev_driver.ko
  mknod /dev/dev_driver c 242 0
  ./app [TIMER_INTERVAL] [TIMER_CNT] [TIMER_INT]
  rmmod dev_driver
  rm /dev/dev_driver