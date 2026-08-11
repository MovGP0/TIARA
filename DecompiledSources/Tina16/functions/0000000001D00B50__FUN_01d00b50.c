/* Ghidra address: 01d00b50 */
/* Ghidra symbol: FUN_01d00b50 */


void FUN_01d00b50(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x168);
  lVar3 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x4b0);
  *(longlong *)(lVar1 + 0xbe) = lVar3;
  *(undefined4 *)(lVar3 + 0xfe) = 0x47535003;
  *(undefined8 *)(lVar3 + 0x528) = *(undefined8 *)(param_1 + 0x2f0);
  uVar2 = FUN_01d38290(lVar3,1);
  *PTR_DAT_02002ce0 = uVar2;
  return;
}

