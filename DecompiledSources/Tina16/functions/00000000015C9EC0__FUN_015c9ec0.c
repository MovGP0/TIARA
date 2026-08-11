/* Ghidra address: 015c9ec0 */
/* Ghidra symbol: FUN_015c9ec0 */


void FUN_015c9ec0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (*(char *)(param_1 + 0xe0) != param_2) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      if (*(char *)(param_1 + 0xe0) == '\0') {
        FUN_015dcd20(param_1);
        *(undefined1 *)(param_1 + 0xe0) = 1;
        FUN_015dc950(param_1);
      }
      else {
        local_20 = auStack_48;
        if (*(longlong *)(param_1 + 0x88) == 0) {
          local_20 = auStack_48;
          uVar1 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x1d,param_1);
          FUN_004134c0(uVar1);
        }
        local_10 = FUN_004b9860(&PTR_FUN_0047c498,1,*(undefined8 *)(param_1 + 0x88),0xff00);
        FUN_004b6dc0(*(undefined8 *)(param_1 + 0x250),0);
        uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x250))(*(undefined8 **)(param_1 + 0x250));
        FUN_004b8ba0(local_10,*(undefined8 *)(param_1 + 0x250),uVar1);
        FUN_00410f20(local_10);
        FUN_015dcd20(param_1);
        *(undefined1 *)(param_1 + 0xe0) = 0;
        FUN_015dc950(param_1);
      }
    }
    *(char *)(param_1 + 0xe0) = param_2;
  }
  return;
}

