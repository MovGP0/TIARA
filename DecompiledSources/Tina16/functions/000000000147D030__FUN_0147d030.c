/* Ghidra address: 0147d030 */
/* Ghidra symbol: FUN_0147d030 */


undefined8 FUN_0147d030(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_c;
  
  uVar1 = *param_1;
  uVar2 = FUN_0147d070(uVar1 & 0xffffffff,0);
  uStack_c = (undefined4)(uVar1 >> 0x20);
  uVar3 = FUN_0147d070(uStack_c,0);
  return CONCAT44(uVar3,uVar2);
}

