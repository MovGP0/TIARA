/* Ghidra address: 014bc140 */
/* Ghidra symbol: FUN_014bc140 */


undefined4
FUN_014bc140(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 local_38;
  undefined8 local_30 [2];
  byte local_19;
  
  local_30[0] = 0;
  local_38 = 0;
  local_19 = 0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    uVar2 = FUN_014bbd70(&DAT_01f52d5c,0x4b,param_4);
    FUN_004185f0(&local_38,param_5);
    FUN_0043ea00(local_30,local_38);
    (**(code **)(param_1 + 0x140))
              (*(undefined8 *)(param_1 + 0x148),param_1,param_2,param_3,uVar2,local_30[0],&local_19)
    ;
  }
  uVar1 = *(undefined4 *)(&DAT_01f52e90 + (ulonglong)local_19 * 4);
  FUN_00414560(&local_38,2);
  return uVar1;
}

