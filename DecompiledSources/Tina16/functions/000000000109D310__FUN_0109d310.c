/* Ghidra address: 0109d310 */
/* Ghidra symbol: FUN_0109d310 */


undefined4 FUN_0109d310(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_30 = 0;
  local_28 = 0;
  cVar1 = _Dbg_IsStopped(*(undefined8 *)(param_1 + 0x9c0));
  if (cVar1 != '\0') {
    uVar2 = FUN_006d5120(*(undefined8 *)(param_1 + 0x878));
    (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x18))
              (*(longlong **)(param_1 + 0x9d8),&local_28,uVar2);
    FUN_0043e130(local_20,local_28);
    FUN_0043e130(&local_30,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548) + 0x48));
    iVar3 = FUN_00416db0(local_20[0],local_30);
    if (iVar3 == 0) {
      local_34 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1660) + 0x3548) + 0x40);
      goto code_r0x0109d3dd;
    }
  }
  local_34 = 0xffffffff;
code_r0x0109d3dd:
  FUN_00414560(&local_30,3);
  return local_34;
}

