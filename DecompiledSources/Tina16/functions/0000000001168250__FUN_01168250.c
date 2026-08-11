/* Ghidra address: 01168250 */
/* Ghidra symbol: FUN_01168250 */


void FUN_01168250(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00414480(&DAT_0203d978);
  iVar2 = param_1[0xb];
  FUN_005fc860(*(undefined8 *)(param_2 + 0x70),DAT_0203aea8);
  iVar1 = FUN_01167b10(4);
  FUN_005fce30(*(undefined8 *)(param_2 + 0x70),iVar1 + 4);
  FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),param_1[4]);
  FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),0);
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),param_1[4]);
  if (param_1[10] == 0) {
    FUN_01166e80(param_2,*param_1 - iVar2,param_1[1]);
    FUN_01166f10(param_2,*param_1 + iVar2,param_1[1]);
  }
  else {
    FUN_01166e80(param_2,*param_1,param_1[1] - iVar2);
    FUN_01166f10(param_2,*param_1,param_1[1] + iVar2);
  }
  iVar2 = 0;
  if (DAT_0203d978 != 0) {
    iVar2 = *(int *)(DAT_0203d978 + -4);
  }
  FUN_00416dc0(&DAT_0203d980,DAT_0203d978,1,iVar2 + -1);
  FUN_00414ad0(&DAT_0203d978,DAT_0203d980);
  FUN_01165eb0(&DAT_0203d978);
  FUN_01168370(param_1,param_2);
  return;
}

