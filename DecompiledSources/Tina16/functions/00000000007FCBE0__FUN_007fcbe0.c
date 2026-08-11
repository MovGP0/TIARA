/* Ghidra address: 007fcbe0 */
/* Ghidra symbol: FUN_007fcbe0 */


void FUN_007fcbe0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  code *pcVar3;
  
  (**(code **)(*param_1 + 0x2a8))(param_1);
  FUN_00651da0(param_1);
  if ((param_1[0x98] != 0) &&
     ((param_1[0xf] == 0 || ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)))) {
    lVar1 = param_1[0x98];
    param_1[0x98] = 0;
    pcVar3 = (code *)FUN_00411550(lVar1,0xffb3);
    cVar2 = (*pcVar3)(lVar1);
    if (cVar2 != '\0') {
      FUN_00801e40(param_1,lVar1);
    }
  }
  if (*(char *)((longlong)param_1 + 0xab) != '\0') {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))
              ((longlong *)param_1[0x17],*(undefined8 *)(DAT_02012668 + 0xa0));
    FUN_0064df70(param_1,1);
  }
  cVar2 = FUN_0080fc30(param_1[0xd1]);
  if (cVar2 != '\0') {
    FUN_00806bc0(param_1,0);
  }
  return;
}

