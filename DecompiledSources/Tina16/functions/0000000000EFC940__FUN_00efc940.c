/* Ghidra address: 00efc940 */
/* Ghidra symbol: FUN_00efc940 */


void FUN_00efc940(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,double param_4,
                 longlong param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 local_48;
  undefined8 local_40 [4];
  
  local_40[0] = 0;
  local_48 = 0;
  FUN_00efa3b0(param_5 + 0x18);
  FUN_00efa3b0(param_5 + 0x20);
  FUN_019b6320(param_3);
  FUN_019b6320(param_3 + 1);
  FUN_019b6320(param_3 + 2);
  FUN_019b6320(param_3 + 3);
  *(undefined8 *)(param_5 + 0xa0) = 0x3ff0000000000000;
  if (*(char *)(param_5 + 0x92) == '\0') {
    FUN_00efae30(local_40,*param_1,param_5);
    FUN_019b9a90(param_4 / 4.0,param_5,0);
    FUN_00efae30(&local_48,*param_2,param_5);
    FUN_019b9a90(param_4 / 4.0,param_5,0);
    if (*(char *)(param_5 + 0xb4) != '\x01') {
      FUN_00efadd0(local_40,&local_48);
    }
    FUN_00efb0b0(local_40[0],param_3,param_3 + 2,param_5 + 0x18,param_5 + 0x45,param_5);
    FUN_019b9a90(param_4 / 4.0,param_5,0);
    FUN_00efb0b0(local_48,param_3 + 1,param_3 + 3,param_5 + 0x20,param_5 + 0x44,param_5);
    FUN_019b9a90(param_4 / 4.0,param_5,0);
    FUN_00ef81f0(param_1);
    FUN_00ef81f0(param_2);
    FUN_00efa3f0(local_40);
    FUN_00efa3f0(&local_48);
    *(undefined1 *)(param_5 + 0xb3) = 0;
    cVar1 = FUN_019b9c80(*param_3,param_3[1],param_5);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_5 + 0xb3) = 1;
      FUN_019b6320(param_3);
      FUN_019b6e50(param_3,&DAT_00efcc9c,param_5);
      FUN_019b6320(param_3 + 2);
      FUN_019b6e50(param_3 + 2,&DAT_00efcc9c,param_5);
    }
    cVar1 = FUN_00efa430(*param_3,param_5);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_5 + 0xb3) = 1;
    }
    cVar1 = FUN_00efa430(param_3[1],param_5);
    uVar3 = (int)cVar1 >> 0x1f;
    if (((int)cVar1 ^ uVar3) - uVar3 == 1) {
      *(undefined1 *)(param_5 + 0xb3) = 1;
      cVar1 = FUN_00efa430(param_3[1],param_5);
      if (cVar1 == -1) {
        FUN_00efa5c0(param_3,param_5);
        FUN_00efa5c0(param_3 + 2,param_5);
      }
    }
    cVar1 = FUN_00efa430(param_3[1],param_5);
    if (cVar1 == '\0') {
      FUN_00ef4260(10,param_5);
    }
    iVar2 = FUN_019b5ce0(*param_3,param_5);
    if (iVar2 == 0) {
      FUN_019b6e50(param_3,&DAT_00efccac,param_5);
      FUN_019b6e50(param_3 + 2,&DAT_00efccac,param_5);
    }
  }
  return;
}

