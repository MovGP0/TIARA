/* Ghidra address: 01ce1be0 */
/* Ghidra symbol: FUN_01ce1be0 */


void FUN_01ce1be0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  *(undefined1 *)(param_1 + 0x59) = 1;
  lVar1 = FUN_01ccd700(&DAT_01ccbf00,1);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))(*(longlong **)(param_1 + 0x78),0);
  FUN_01ccdc70(lVar1,uVar2,1);
  FUN_005fc860(*(undefined8 *)(lVar1 + 0x98),0);
  FUN_01cd64a0(lVar1,L"Curve Pane");
  FUN_01cd6430(lVar1,&local_20);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x80))
            (*(longlong **)(param_1 + 0x78),local_20,lVar1);
  lVar3 = FUN_01cd9760(&PTR_FUN_01cd9128,1);
  *(longlong *)(lVar3 + 0x78) = param_1;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(*(longlong **)(param_1 + 0x70),0);
  FUN_01cd9880(lVar3,uVar2);
  FUN_01cd98a0(lVar3,lVar1);
  FUN_01cd6430(lVar1,&local_28);
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x80))
            (*(longlong **)(param_1 + 0x88),local_28,lVar3);
  FUN_00414560(&local_28,2);
  return;
}

