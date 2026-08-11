/* Ghidra address: 016bc310 */
/* Ghidra symbol: FUN_016bc310 */


ulonglong FUN_016bc310(longlong param_1,byte *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined1 local_148 [12];
  undefined4 local_13c;
  byte local_138 [264];
  
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar4 = local_138;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  }
  cVar1 = FUN_01d350f0(*(undefined8 *)(param_1 + 0xa28),local_138,&local_13c);
  if (cVar1 == '\0') {
    if (param_4 == '\0') {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = FUN_016bbd90(param_1,local_138,param_3,local_148);
    }
  }
  else {
    lVar3 = FUN_01d347d0(*(undefined8 *)(param_1 + 0xa28),local_13c);
    uVar2 = (ulonglong)*(uint *)(lVar3 + 0x18);
  }
  return uVar2;
}

