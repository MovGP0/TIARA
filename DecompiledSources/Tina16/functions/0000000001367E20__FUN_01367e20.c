/* Ghidra address: 01367e20 */
/* Ghidra symbol: FUN_01367e20 */


void FUN_01367e20(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 local_30;
  undefined4 local_2c [3];
  
  if (*(longlong *)(param_2 + 8) == 0x3f4e) {
    (**(code **)(*param_1 + 0x68))(param_1,0x3f4e);
    uVar1 = FUN_0198d430(*(undefined8 *)(param_1[2] + 0x27a8));
    FUN_01a98380(uVar1,*(undefined4 *)((longlong)param_1 + 0x34),(int)param_1[7],local_2c,&local_30)
    ;
    (**(code **)(*param_1 + 0x58))(param_1,0,local_2c[0],local_30);
    *(undefined8 *)(param_2 + 0x18) = 1;
  }
  else {
    (**(code **)(*param_1 + 0x68))(param_1,0x3f4f);
    *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  }
  return;
}

