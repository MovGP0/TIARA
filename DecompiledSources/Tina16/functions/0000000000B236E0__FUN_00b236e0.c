/* Ghidra address: 00b236e0 */
/* Ghidra symbol: FUN_00b236e0 */


void FUN_00b236e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ushort *puVar7;
  
  FUN_00b233a0(*param_2);
  puVar7 = (ushort *)FUN_00415ab0(param_1);
  uVar6 = FUN_0040c770((double)*puVar7 / 20.0);
  *(undefined2 *)(*param_2 + 7) = uVar6;
  uVar4 = *(ushort *)(param_1 + 2);
  *(bool *)(*param_2 + 1) = (uVar4 & 2) != 0;
  *(bool *)(*param_2 + 3) = (uVar4 & 8) != 0;
  uVar5 = FUN_00b1ba50(*(undefined2 *)(param_1 + 4));
  *(undefined1 *)(*param_2 + 6) = uVar5;
  *(bool *)*param_2 = *(short *)(param_1 + 6) == 700;
  *(char *)(*param_2 + 5) = (char)*(undefined2 *)(param_1 + 8);
  cVar1 = *(char *)(param_1 + 10);
  *(char *)(*param_2 + 4) = cVar1;
  *(bool *)(*param_2 + 2) = cVar1 != '\0';
  bVar2 = *(byte *)(param_1 + 0xe);
  bVar3 = *(byte *)(param_1 + 0xf);
  FUN_0040d200(*param_2 + 9,200,0);
  if ((bVar3 & 1) == 1) {
    FUN_00409a70(param_1 + 0x10,*param_2 + 9,(uint)bVar2 * 2);
  }
  else {
    FUN_00409a70(param_1 + 0x10,*param_2 + 9,bVar2);
  }
  return;
}

