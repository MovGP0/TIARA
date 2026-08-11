/* Ghidra address: 0108c580 */
/* Ghidra symbol: FUN_0108c580 */


void FUN_0108c580(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 local_48;
  undefined2 uStack_44;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_40[0] = 0;
  plVar5 = (longlong *)FUN_007fc180(&PTR_FUN_01070a48,1,*(undefined8 *)PTR_DAT_02004030);
  cVar2 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
  FUN_0043e1a0(local_40,*(undefined8 *)(param_1 + 0xb38));
  FUN_010715c0(plVar5,*(longlong *)(param_1 + 0xac8) + 0x28,
               *(undefined8 *)(*(longlong *)(param_1 + 0xbf0) + 0x48),local_40[0],
               *(undefined4 *)(param_1 + 0xad8),
               *(undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0x108),
               *(undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0xf0));
  iVar3 = (**(code **)(*plVar5 + 0x2d0))(plVar5);
  if (iVar3 == 1) {
    FUN_010716b0(plVar5,&local_48,&local_30);
    lVar1 = *(longlong *)(param_1 + 0xac8);
    *(undefined4 *)(lVar1 + 0x28) = local_48;
    *(undefined2 *)(lVar1 + 0x2c) = uStack_44;
    if (cVar2 == '\0') {
      cVar2 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
      if (cVar2 != '\0') {
        uVar4 = FUN_0108c4a0(param_1,2);
        *(undefined4 *)(param_1 + 0xaa0) = uVar4;
        FUN_0108c0f0();
      }
    }
    if (*(char *)(local_30 + 8) != '\0') {
      FUN_0160e060(*(undefined8 *)(param_1 + 0xad0),local_30);
    }
  }
  FUN_00410f20(plVar5);
  FUN_00414480(local_40);
  return;
}

