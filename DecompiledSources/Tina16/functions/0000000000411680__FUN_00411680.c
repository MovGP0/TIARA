/* Ghidra address: 00411680 */
/* Ghidra symbol: FUN_00411680 */


bool FUN_00411680(byte *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 local_628 [512];
  undefined1 local_428 [512];
  byte local_228 [256];
  byte local_128 [264];
  
  lVar4 = (ulonglong)*param_1 + 1;
  pbVar5 = local_128;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_1;
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
  }
  lVar4 = (ulonglong)*param_2 + 1;
  pbVar5 = local_228;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  uVar1 = thunk_FUN_04139c29(0xfde9,0,local_128 + 1,local_128[0],local_428,0x100);
  uVar2 = thunk_FUN_04139c29(0xfde9,0,local_228 + 1,local_228[0],local_628,0x100);
  iVar3 = FUN_00407000(DAT_02006a30,1,local_428,uVar1,local_628,uVar2);
  return iVar3 == 2;
}

