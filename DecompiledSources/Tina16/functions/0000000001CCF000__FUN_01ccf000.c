/* Ghidra address: 01ccf000 */
/* Ghidra symbol: FUN_01ccf000 */


void FUN_01ccf000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_20 = 0;
  plVar2 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
  (**(code **)(**(longlong **)(plVar2[0x12] + 0x80) + 0x10))
            (*(longlong **)(plVar2[0x12] + 0x80),*(undefined8 *)(param_1 + 0xa0));
  uVar1 = FUN_01cd66b0(param_1);
  FUN_00f05f60(&local_20,param_2,*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(param_1 + 0x80),
               uVar1,0xffffffe2,0xffffffe2);
  (**(code **)(**(longlong **)(plVar2[0x12] + 0xa0) + 0x78))
            (*(longlong **)(plVar2[0x12] + 0xa0),local_20);
  local_30[0] = FUN_00498310(param_4,param_5);
  (**(code **)(*plVar2 + 200))(plVar2,local_30);
  FUN_01a5dad0(plVar2,param_3);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))
            (*(longlong **)(param_1 + 0x48),L"ScaleNumber",plVar2);
  FUN_00414480(&local_20);
  return;
}

