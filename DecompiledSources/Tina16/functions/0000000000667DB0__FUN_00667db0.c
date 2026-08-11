/* Ghidra address: 00667db0 */
/* Ghidra symbol: FUN_00667db0 */


void FUN_00667db0(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = 0xff;
  pcVar2 = (code *)FUN_00411550(uVar1,0xffd5);
  (*pcVar2)(uVar1,CONCAT11(uVar3,2));
  return;
}

