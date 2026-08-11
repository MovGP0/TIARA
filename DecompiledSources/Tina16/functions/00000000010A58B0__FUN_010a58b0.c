/* Ghidra address: 010a58b0 */
/* Ghidra symbol: FUN_010a58b0 */


void FUN_010a58b0(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  FUN_019a1310(*(undefined8 *)(param_1 + 0x968),uVar4,4);
  lVar5 = FUN_004aeac0(uVar4,0);
  FUN_00410f20(uVar4);
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1a8) + 0xd8);
  *(longlong *)(param_1 + 0x1a70) = lVar5;
  lVar5 = *(longlong *)(lVar5 + 0x78);
  *(undefined1 *)(lVar5 + 0x13a18) = 1;
  *(undefined1 *)(lVar5 + 0x13a19) = 1;
  *(undefined8 *)(param_1 + 0xa58) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x13a10);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x28))(*(longlong **)(param_1 + 0x9f0));
  if (0 < iVar2) {
    (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x18))
              (*(longlong **)(param_1 + 0x9f0),&local_20,0);
    uVar3 = FUN_0043fc00(local_20);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x94) = uVar3;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x28))(*(longlong **)(param_1 + 0x9f0));
  if (2 < iVar2) {
    (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x18))
              (*(longlong **)(param_1 + 0x9f0),&local_28,2);
    uVar1 = FUN_01b217f0(local_28);
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x139ea) = uVar1;
  }
  FUN_0043f750(&local_30,
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x94));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x878),local_30);
  (**(code **)(**(longlong **)(param_1 + 0x930) + 0x268))
            (*(longlong **)(param_1 + 0x930),
             *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x139ea));
  FUN_010a57a0(param_1);
  FUN_00414560(&local_30,3);
  return;
}

