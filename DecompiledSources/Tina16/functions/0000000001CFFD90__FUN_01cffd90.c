/* Ghidra address: 01cffd90 */
/* Ghidra symbol: FUN_01cffd90 */


undefined8 FUN_01cffd90(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 local_30 [8];
  
  cVar1 = FUN_01cfd2d0();
  cVar3 = '\0';
  do {
    cVar2 = (**(code **)(*param_2 + 0x2d0))(param_2,cVar3,local_30);
    if (cVar2 == '\x04') {
      return 1;
    }
    cVar3 = cVar3 + '\x01';
    cVar1 = cVar1 + -1;
  } while (cVar1 != '\0');
  return 0;
}

