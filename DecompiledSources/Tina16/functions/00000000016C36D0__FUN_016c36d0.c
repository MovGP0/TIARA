/* Ghidra address: 016c36d0 */
/* Ghidra symbol: FUN_016c36d0 */


void FUN_016c36d0(longlong param_1,undefined8 *param_2,byte *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 local_13c [4];
  byte local_138 [264];
  
  lVar4 = (ulonglong)*param_3 + 1;
  pbVar5 = local_138;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_3;
    param_3 = param_3 + 1;
    pbVar5 = pbVar5 + 1;
  }
  iVar2 = FUN_00414f50(local_138,&DAT_016c38c8,(ulonglong)local_138[0] + 1);
  if (iVar2 != 0) {
    iVar2 = FUN_00414f50(local_138,&DAT_016c38cd,(ulonglong)local_138[0] + 1);
    if (iVar2 != 0) {
      iVar2 = FUN_00414f50(local_138,&DAT_016c38d0,(ulonglong)local_138[0] + 1);
      if (iVar2 != 0) {
        iVar2 = FUN_00414f50(local_138,&DAT_016c38d5,(ulonglong)local_138[0] + 1);
        if (iVar2 != 0) {
          iVar2 = FUN_00414f50(local_138,&DAT_016c38da,(ulonglong)local_138[0] + 1);
          if (iVar2 != 0) {
            iVar2 = FUN_00414f50(local_138,&DAT_016c38dd,(ulonglong)local_138[0] + 1);
            if (iVar2 != 0) {
              iVar2 = FUN_00414f50(local_138,&DAT_016c38df,(ulonglong)local_138[0] + 1);
              if (iVar2 != 0) {
                iVar2 = FUN_00414f50(local_138,&DAT_016c38e1,(ulonglong)local_138[0] + 1);
                if (iVar2 != 0) {
                  iVar2 = FUN_00414f50(local_138,&DAT_016c38e5,(ulonglong)local_138[0] + 1);
                  if (iVar2 != 0) {
                    iVar2 = FUN_00414f50(local_138,&DAT_016c38ea,(ulonglong)local_138[0] + 1);
                    if (iVar2 != 0) goto LAB_016c384e;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x9a3) == '\0') {
    FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0xf,local_138,0xffffffff);
  }
LAB_016c384e:
  cVar1 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x9e0),local_138,local_13c);
  if (cVar1 == '\0') {
    uVar3 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_138,*(undefined8 *)(param_1 + 0x10));
    *param_2 = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0x9e0) + 0x50))(*(longlong **)(param_1 + 0x9e0),*param_2)
    ;
  }
  else {
    *param_2 = 0;
    if (param_4 == '\0') {
      FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0xf,local_138,0xffffffff);
    }
  }
  return;
}

