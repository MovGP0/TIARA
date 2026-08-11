/* Ghidra address: 018b0260 */
/* Ghidra symbol: FUN_018b0260 */


void FUN_018b0260(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x30))
                    (*(longlong **)(param_1 + 0x838),*(undefined4 *)(param_2 + 0x18));
  local_20 = FUN_01979de0(uVar1,1);
  uVar1 = FUN_0180bfb0();
  FUN_01809b60(uVar1,&local_38,L"clFP3files");
  FUN_00416ba0(local_20 + 0xb0,local_38,L" (*.fp3)|*.fp3");
  FUN_00414ad0(local_20 + 0xa0,L".fp3");
  plVar2 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x848) + 0x278))(*(longlong **)(param_1 + 0x848));
  (**(code **)(*plVar2 + 0x148))(plVar2,local_20,0);
  plVar2 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x838) + 0x30))
                     (*(longlong **)(param_1 + 0x838),*(undefined4 *)(param_2 + 0x18));
  (**(code **)(*plVar2 + 0x100))(plVar2,local_20);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return;
}

