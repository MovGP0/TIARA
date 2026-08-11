/* Ghidra address: 0084d0f0 */
/* Ghidra symbol: FUN_0084d0f0 */


void FUN_0084d0f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  lVar2 = FUN_00410e60(&DAT_0084d018,1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2 + 0x10;
  }
  FUN_0041b840(local_30,lVar3);
  *(longlong **)(lVar2 + 0x18) = param_1;
  iVar1 = (int)param_1[8];
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
      iVar1 = iVar1 + -1;
      if (-1 < iVar1) {
        do {
          (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x48))(*(longlong **)(lVar2 + 0x18),iVar1,0);
          (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x40))(*(longlong **)(lVar2 + 0x18),iVar1);
          iVar1 = iVar1 + -1;
        } while (iVar1 != -1);
      }
    }
  }
  else {
    lVar3 = FUN_0084bd30(*(undefined8 *)(param_1[7] + 0x600),iVar1 + -1);
    if (lVar3 != 0) {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = lVar2 + 0x20;
      }
      FUN_0084bcc0(*(undefined8 *)(lVar3 + 0x38),lVar2);
    }
  }
  FUN_0041b800(local_30);
  return;
}

