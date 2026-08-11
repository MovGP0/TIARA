/* Ghidra address: 01649820 */
/* Ghidra symbol: FUN_01649820 */


void FUN_01649820(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x18))
                  (*(longlong **)(param_1 + 0xb8),local_30,iVar4);
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x30))
                          (*(longlong **)(param_1 + 0xb8),iVar4);
        lVar3 = FUN_004113f0(uVar2,&DAT_01618348);
        uVar2 = 0;
        if (*(int *)(lVar3 + 8) == 0) {
          uVar2 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x13a10) + 0x18) +
                   (longlong)*(int *)(lVar3 + 0xc) * 8);
        }
        else if (*(int *)(lVar3 + 8) == 1) {
          uVar2 = FUN_016ee780(*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                               *(undefined8 *)(param_1 + 0x38));
        }
        FUN_0161a130(lVar3,*(undefined8 *)(param_1 + 0x13a20),uVar2);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414480(local_30);
  return;
}

