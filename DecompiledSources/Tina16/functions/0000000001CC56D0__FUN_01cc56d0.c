/* Ghidra address: 01cc56d0 */
/* Ghidra symbol: FUN_01cc56d0 */


void FUN_01cc56d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 local_res20 [8];
  
  lVar3 = *(longlong *)(param_1 + 8);
  local_res20[0] = param_4;
  lVar1 = FUN_01d347d0(lVar3);
  plVar2 = (longlong *)
           FUN_01d347d0(*(undefined8 *)(*(longlong *)(lVar3 + 0x440) + 8),
                        *(undefined4 *)(lVar1 + 0x3c));
  (**(code **)(*plVar2 + 0x50))(plVar2,param_3,local_res20);
  FUN_01cc0a60(lVar1,param_3);
  lVar3 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(lVar3 + 0x440) + 8),
                       *(undefined4 *)(lVar1 + 0x3c));
  *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar3 + 0xc);
  return;
}

