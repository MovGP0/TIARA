/* Ghidra address: 01cff9a0 */
/* Ghidra symbol: FUN_01cff9a0 */


void FUN_01cff9a0(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  short sVar3;
  undefined1 local_dc [51];
  undefined1 local_a9;
  undefined2 local_a8;
  
  uVar2 = FUN_01d03160(param_1);
  FUN_01cffa40(param_1,9);
  sVar3 = (short)uVar2;
  if (sVar3 != 0x2900) {
    FUN_01cffa40(param_1,3);
  }
  FUN_01cffa40(param_1,2);
  local_a9 = 10;
  local_a8 = 0;
  if ((sVar3 == 0x2903) || (sVar3 == 0x2902)) {
    local_a8 = 1;
  }
  cVar1 = FUN_01d3d600(uVar2);
  if (cVar1 == '\0') {
    FUN_01cffc20(param_1,local_dc);
  }
  cVar1 = FUN_01d3d600(uVar2);
  if (cVar1 != '\0') {
    FUN_0140ae60(param_1);
  }
  return;
}

