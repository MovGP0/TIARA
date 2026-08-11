/* Ghidra address: 01d6e5e0 */
/* Ghidra symbol: FUN_01d6e5e0 */


void FUN_01d6e5e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte bVar9;
  byte *local_38;
  char local_2a;
  char local_29;
  
  bVar2 = FUN_016ebdb0(param_1);
  bVar3 = bVar2 - 3;
  if (0x14 < bVar3) {
    FUN_01b04d70(0x21c,&LAB_01d6e96c,0);
  }
  pbVar7 = (byte *)FUN_01d6c890(0,&PTR_FUN_01d6c888,bVar3);
  local_38 = pbVar7;
  uVar8 = FUN_016ebdc0(param_1);
  bVar4 = FUN_01d03580(uVar8);
  *pbVar7 = bVar4;
  if ((8 < *pbVar7) || (*pbVar7 == 0)) {
    *pbVar7 = 1;
  }
  cVar5 = FUN_016e9de0(param_1,bVar2 - 1);
  if (cVar5 == '\0') {
    pbVar7[0x10] = 0;
    bVar4 = bVar2 - 1;
  }
  else {
    pbVar7[0x10] = bVar2 - 1;
    bVar4 = bVar2;
  }
  cVar5 = FUN_016e9de0(param_1,bVar2);
  if (cVar5 == '\0') {
    pbVar7[0x13] = 0;
    bVar4 = bVar4 - 1;
  }
  else {
    pbVar7[0x13] = bVar2;
  }
  pbVar7[0x12] = bVar2 - 2;
  pbVar7[0x11] = bVar2 - 2;
  local_29 = '\x01';
  local_2a = bVar4 + 1;
  FUN_01d6ded0(param_1,pbVar7,&local_29,&local_2a);
  bVar9 = 1;
  for (bVar2 = bVar3; bVar2 != 0; bVar2 = bVar2 - 1) {
    *(byte *)(*(longlong *)(*(longlong *)(pbVar7 + 0x28) + -0x228 + (ulonglong)bVar9 * 0x228) + 6) =
         *pbVar7;
    bVar9 = bVar9 + 1;
  }
  *(byte *)(*(longlong *)(pbVar7 + 0x9cc8) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0x38) + 6) = *pbVar7;
  FUN_016e9e20(param_1,local_29 + -1);
  FUN_016e9cd0(param_1,(local_2a - bVar4) + -1);
  if (*PTR_DAT_020052b8 != '\0') {
    cVar5 = FUN_016e9e80(param_1,3);
    FUN_016ebe60(param_1,cVar5 + '\x01',pbVar7[0x10],0,1);
    FUN_016ebe60(param_1,cVar5 + '\x02',pbVar7[0x13],0,1);
    FUN_016ebe60(param_1,cVar5 + '\x03',pbVar7[0x13],pbVar7[0x10],1);
    FUN_016ed320(param_1,cVar5 + '\x01',0,*(undefined8 *)(param_2 + 0x430),0);
    FUN_016ed320(param_1,cVar5 + '\x02',0,*(undefined8 *)(param_2 + 0x430),0);
    FUN_016ed320(param_1,cVar5 + '\x03',0,0x3f50624dd2f1a9fc,0);
  }
  bVar4 = 1;
  for (bVar2 = bVar3; bVar2 != 0; bVar2 = bVar2 - 1) {
    lVar1 = *(longlong *)(*(longlong *)(pbVar7 + 0x28) + -0x228 + (ulonglong)bVar4 * 0x228);
    (**(code **)(*(longlong *)(lVar1 + 8) + 8))(lVar1,param_1,param_2);
    bVar4 = bVar4 + 1;
  }
  (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x9cc8) + 8) + 8))
            (*(longlong *)(pbVar7 + 0x9cc8),param_1);
  sVar6 = FUN_016ebd90(param_1);
  if (sVar6 == 0x889) {
    *(undefined1 *)(*(longlong *)(pbVar7 + 0x9cc8) + 0x10) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(pbVar7 + 0x28) + 0x228) + 2);
  }
  FUN_01d6dd40(param_1,bVar3,pbVar7[0x10],**(undefined1 **)(pbVar7 + 0x9cc8),pbVar7[0x14],
               pbVar7[0x15],pbVar7);
  FUN_016e9f40(param_1,FUN_01d6d9a0);
  FUN_016ea050(param_1,&local_38,8);
  FUN_016e9f50(param_1,FUN_01d6e5c0);
  return;
}

