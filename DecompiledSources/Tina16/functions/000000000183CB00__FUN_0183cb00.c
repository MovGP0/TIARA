/* Ghidra address: 0183cb00 */
/* Ghidra symbol: FUN_0183cb00 */


void FUN_0183cb00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = FUN_0181e3e0(param_2);
  if (iVar1 == 1) {
    lVar2 = FUN_00410e60(&DAT_0181ce38,1);
    FUN_00414ad0(lVar2 + 0x18,L"dsgn");
    FUN_0181e490(param_2,0,lVar2);
    lVar2 = FUN_0181e400(lVar2);
    FUN_00414ad0(lVar2 + 0x18,L"node");
    uVar3 = FUN_0181e3c0(param_2,1);
    FUN_0181e5f0(uVar3,local_20,&DAT_0183cc88);
    FUN_00416cd0(lVar2 + 0x28,3,L"text=\"Result\" pos=\"",local_20[0],&DAT_0183cc9c);
    FUN_0183b1c0(param_1,param_2,param_3,param_4);
  }
  FUN_0183ca30(param_1,param_2,param_3,param_4);
  FUN_00414480(local_20);
  return;
}

