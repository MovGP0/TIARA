/* Ghidra address: 01cc5750 */
/* Ghidra symbol: FUN_01cc5750 */


void FUN_01cc5750(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar1 = FUN_01d347d0(lVar3);
  plVar2 = (longlong *)
           FUN_01d347d0(*(undefined8 *)(*(longlong *)(lVar3 + 0x440) + 8),
                        *(undefined4 *)(lVar1 + 0x40));
  (**(code **)(*plVar2 + 0x50))(plVar2,param_3,param_4);
  FUN_01cc0a60(lVar1,param_3);
  lVar3 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(lVar3 + 0x440) + 8),
                       *(undefined4 *)(lVar1 + 0x40));
  *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar3 + 0xc);
  return;
}

