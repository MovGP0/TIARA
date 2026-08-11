/* Ghidra address: 01861b00 */
/* Ghidra symbol: FUN_01861b00 */


void FUN_01861b00(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_38 [16];
  
  if ((*(char *)((longlong)param_1 + 0x95) != '\0') && (0 < (int)param_1[0x12])) {
    uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_00498350(local_38,0,0,uVar1,uVar2);
    *(undefined4 *)(param_2 + 0x90) = 0xcc0020;
    uVar3 = FUN_005ffa40(param_2);
    thunk_FUN_041e8c78(uVar3,3);
    FUN_018607a0(param_1[0x13],param_2,param_3,local_38);
  }
  return;
}

