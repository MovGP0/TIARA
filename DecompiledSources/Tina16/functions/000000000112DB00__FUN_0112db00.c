/* Ghidra address: 0112db00 */
/* Ghidra symbol: FUN_0112db00 */


char * FUN_0112db00(char *param_1,byte *param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  *param_3 = 0;
  cVar1 = FUN_0112d940();
  if (cVar1 == '\0') {
    uVar2 = 0;
    while ((((int)uVar2 < (int)(uint)*param_2 &&
            (((uVar2 & 1) != 0 || ((param_2[(longlong)((int)uVar2 / 2) + 2] & 0xf0) == 0)))) &&
           (((uVar2 & 1) != 1 || ((param_2[(longlong)((int)uVar2 / 2) + 2] & 0xf) == 0))))) {
      uVar2 = uVar2 + 1;
    }
    uVar3 = (uint)*param_2;
    do {
      uVar3 = uVar3 - 1;
      if (((int)uVar3 <= (int)uVar2) ||
         (((uVar3 & 1) == 0 && ((param_2[(longlong)((int)uVar3 / 2) + 2] & 0xf0) != 0)))) break;
    } while (((uVar3 & 1) != 1) || ((param_2[(longlong)((int)uVar3 / 2) + 2] & 0xf) == 0));
    *param_3 = (((uint)*param_2 - (uint)(param_2[1] & 0x3f)) - uVar2) + -1;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
    *param_1 = (char)uVar3 + '\x01';
    param_1[1] = '\0';
    FUN_0112ebb0(param_1,param_1,(uVar3 - uVar2) + 1,0);
    param_1[1] = *param_1 - 1U | param_2[1] & 0x80;
  }
  else {
    *(undefined8 *)param_1 = DAT_01f24afa;
    *(undefined8 *)(param_1 + 8) = DAT_01f24b02;
    *(undefined8 *)(param_1 + 0x10) = DAT_01f24b0a;
    *(undefined8 *)(param_1 + 0x18) = DAT_01f24b12;
    *(undefined2 *)(param_1 + 0x20) = DAT_01f24b1a;
  }
  return param_1;
}

