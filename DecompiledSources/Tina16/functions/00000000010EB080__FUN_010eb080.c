/* Ghidra address: 010eb080 */
/* Ghidra symbol: FUN_010eb080 */


void FUN_010eb080(longlong param_1,double param_2,char param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  *(double *)(param_1 + 0x80) = param_2 * *(double *)(param_1 + 0x80);
  *(double *)(param_1 + 0x78) = param_2 * *(double *)(param_1 + 0x78);
  FUN_010bfdb0(param_1 + 0x80,2);
  FUN_010bfdb0(param_1 + 0x78,2);
  lVar1 = *(longlong *)(param_1 + 0x50);
  iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))(*(longlong **)(lVar1 + 0xd8));
  if (0 < iVar2) {
    iVar2 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = (**(code **)(**(longlong **)(lVar1 + 0xd8) + 0x30))
                          (*(longlong **)(lVar1 + 0xd8),iVar5);
        uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x70) + 0x30))(*(longlong **)(lVar3 + 0x70),0);
        lVar3 = FUN_004113f0(uVar4,&DAT_01ccbf00);
        *(undefined8 *)(lVar3 + 0xc0) = *(undefined8 *)(param_1 + 0x80);
        *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)(param_1 + 0x78);
        if (param_3 != '\0') {
          uVar4 = FUN_00b90620(param_2 * *(double *)(lVar3 + 0xd0),*(undefined8 *)(lVar3 + 0xc0));
          *(undefined8 *)(lVar3 + 0xd0) = uVar4;
          uVar4 = FUN_00b90650(param_2 * *(double *)(lVar3 + 200),*(undefined8 *)(lVar3 + 0xb8));
          *(undefined8 *)(lVar3 + 200) = uVar4;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (param_4 != '\0') {
      FUN_01acfa60(lVar1);
      FUN_01aceb90(lVar1,1);
    }
  }
  return;
}

