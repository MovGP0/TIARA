/* Ghidra address: 0112e4e0 */
/* Ghidra symbol: FUN_0112e4e0 */


void FUN_0112e4e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 local_6c;
  char local_6b;
  byte abStack_6a [32];
  byte local_4a;
  char local_49;
  byte abStack_48 [40];
  
  FUN_0112dc70(param_1,param_2,&local_4a,&local_6c);
  *param_3 = DAT_01f24afa;
  param_3[1] = DAT_01f24b02;
  param_3[2] = DAT_01f24b0a;
  param_3[3] = DAT_01f24b12;
  *(undefined2 *)(param_3 + 4) = DAT_01f24b1a;
  if (local_49 == local_6b) {
    FUN_0112ddb0(&local_4a,&local_6c,param_3,0);
  }
  else {
    for (iVar1 = 0;
        (uVar2 = (ulonglong)(local_4a + 1) % 2, iVar1 < (int)((local_4a + 1) / 2) &&
        (uVar2 = (ulonglong)abStack_48[iVar1], abStack_48[iVar1] == abStack_6a[iVar1]));
        iVar1 = iVar1 + 1) {
    }
    if (abStack_48[iVar1] < abStack_6a[iVar1]) {
      FUN_0112e090(&local_4a,uVar2);
    }
    else {
      FUN_0112e090(&local_6c,uVar2);
    }
    FUN_0112ddb0(&local_4a,&local_6c,param_3,1);
  }
  return;
}

