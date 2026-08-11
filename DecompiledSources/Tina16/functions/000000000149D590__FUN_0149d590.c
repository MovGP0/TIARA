/* Ghidra address: 0149d590 */
/* Ghidra symbol: FUN_0149d590 */


int FUN_0149d590(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))
                    (*(longlong **)(param_1 + 0x28),param_2);
  iVar2 = FUN_01cf0700(param_1,param_2);
  local_24 = iVar1 + iVar2 + 2;
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f)
            & 0x39U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_01b240b0(local_20,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    iVar1 = FUN_01d31350(local_20[0]);
    local_24 = local_24 + iVar1;
  }
  FUN_00414480(local_20);
  return local_24;
}

