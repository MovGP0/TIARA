/* Ghidra address: 00b29b80 */
/* Ghidra symbol: FUN_00b29b80 */


undefined2 FUN_00b29b80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 local_res18 [2];
  undefined2 local_1a;
  
  local_res18[0] = param_3;
  FUN_00414650(local_res18);
  local_1a = 0xffff;
  uVar1 = FUN_00b28cf0(param_1);
  if ((short)uVar1 != -1) {
    uVar2 = FUN_00b288f0(*(undefined8 *)(param_1 + 0x18),param_2);
    if ((short)uVar2 != -1) {
      uVar3 = FUN_00b288f0(*(undefined8 *)(param_1 + 0x18),local_res18[0]);
      if ((short)uVar3 != -1) {
        local_1a = FUN_00b29a30(param_1,uVar1,uVar2,uVar3,1);
      }
    }
  }
  FUN_00414520(local_res18);
  return local_1a;
}

