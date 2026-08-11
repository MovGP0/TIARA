/* Ghidra address: 01bf6e30 */
/* Ghidra symbol: FUN_01bf6e30 */


void FUN_01bf6e30(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  pcVar1 = (code *)FUN_00411550(param_1,0xffef);
  lVar2 = (*pcVar1)(param_1);
  uVar4 = 0xff;
  pcVar1 = (code *)FUN_00411550(param_1,0xffee);
  uVar3 = (*pcVar1)(param_1);
  (**(code **)(lVar2 + 0x50))(lVar2,CONCAT11(uVar4,1),param_1,uVar3);
  return;
}

