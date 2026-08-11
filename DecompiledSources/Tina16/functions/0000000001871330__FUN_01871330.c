/* Ghidra address: 01871330 */
/* Ghidra symbol: FUN_01871330 */


undefined1
FUN_01871330(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0xe8))(param_1);
  if ((char)param_1[10] == '\0') {
    param_1[4] = *(longlong *)((longlong)param_6 + 0xc);
    param_1[5] = *(longlong *)((longlong)param_6 + 0x14);
    uVar1 = FUN_004113f0(*param_6,&PTR_FUN_00486f38);
    (**(code **)(*param_1 + 0xf0))(param_1,uVar1,param_1 + 0x10,param_2,param_3);
  }
  return (char)param_1[10];
}

