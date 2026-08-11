/* Ghidra address: 01d06900 */
/* Ghidra symbol: FUN_01d06900 */


longlong * FUN_01d06900(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414480(param_2);
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 != '\0') {
    lVar5 = param_1[0x35];
    if (*(longlong *)(lVar5 + 0x50) != 0) {
      iVar4 = FUN_00416db0(*(undefined8 *)(param_1[0x35] + 0x50),L"SCK#");
      if (iVar4 != 0) {
        FUN_00414ad0(param_2,*(undefined8 *)(param_1[0x35] + 0x50));
      }
    }
    if (*param_2 == 0) {
      lVar5 = *(longlong *)(lVar5 + 0x68);
      if (lVar5 == 0) {
        FUN_00414480(param_2);
      }
      else {
        FUN_00414ad0(param_2,*(undefined8 *)(lVar5 + 0x18));
      }
    }
    if (*param_2 == 0) {
LAB_01d069c9:
      FUN_00414ad0(param_2,&DAT_01d06ac4);
    }
    else {
      iVar4 = FUN_00416db0(*param_2,L"Label");
      if (iVar4 == 0) goto LAB_01d069c9;
    }
    if (*param_2 != 0) goto LAB_01d06a5a;
  }
  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  FUN_0043f750(local_20,uVar2);
  sVar3 = FUN_00c40790(DAT_01ff0568,local_20[0]);
  if (sVar3 != -1) {
    lVar5 = FUN_004aeac0(DAT_01ff0568,(int)sVar3);
    FUN_00414ad0(param_2,*(undefined8 *)(lVar5 + 0x18));
    if (*param_2 != 0) goto LAB_01d06a5a;
  }
  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  FUN_01d059a0(param_2,uVar2);
LAB_01d06a5a:
  FUN_00414480(local_20);
  return param_2;
}

