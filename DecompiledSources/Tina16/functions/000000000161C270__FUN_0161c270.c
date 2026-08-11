/* Ghidra address: 0161c270 */
/* Ghidra symbol: FUN_0161c270 */


undefined8 FUN_0161c270(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_01698550(0);
  lVar1 = *(longlong *)(param_2 + 8);
  uVar3 = FUN_01619030(&DAT_01616f80,1,param_1,uVar2,
                       *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x638));
  FUN_004ae7e0(*(undefined8 *)(lVar1 + 0x68),uVar3);
  return uVar2;
}

