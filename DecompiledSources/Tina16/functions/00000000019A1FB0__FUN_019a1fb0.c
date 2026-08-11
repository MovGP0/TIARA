/* Ghidra address: 019a1fb0 */
/* Ghidra symbol: FUN_019a1fb0 */


ulonglong FUN_019a1fb0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  uint7 uVar4;
  ulonglong uVar3;
  
  uVar2 = (**(code **)(*param_2 + 0x2b8))(param_2);
  uVar3 = (ulonglong)uVar2;
  cVar1 = (**(code **)(*param_2 + 0x2c0))(param_2);
  if (cVar1 != '\0') {
    cVar1 = (char)uVar2;
    uVar4 = (uint7)(uint3)(uVar2 >> 8);
    if (cVar1 == '\0') {
      uVar3 = CONCAT71(uVar4,2);
    }
    else if (cVar1 == '\x01') {
      uVar3 = CONCAT71(uVar4,3);
    }
    else if (cVar1 == '\x02') {
      uVar3 = 0;
    }
    else if (cVar1 == '\x03') {
      uVar3 = CONCAT71(uVar4,1);
    }
  }
  return uVar3;
}

