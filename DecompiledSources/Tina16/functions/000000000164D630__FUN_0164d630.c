/* Ghidra address: 0164d630 */
/* Ghidra symbol: FUN_0164d630 */


void FUN_0164d630(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = FUN_016eebb0(param_3,*(undefined2 *)(param_4 + 0x98),param_3);
  *(undefined4 *)(param_4 + 0x9c) = uVar2;
  iVar3 = 0;
  iVar5 = *(int *)(param_4 + 4);
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = (longlong)iVar3;
      if (*(char *)(*(longlong *)(param_4 + 0x18) + lVar4 * 0xc) == '\0') {
        if (param_4[0x61] == '\0') {
          uVar2 = FUN_01b05600(param_3,*(undefined1 *)
                                        (*(longlong *)(param_4 + 0x18) + 1 + lVar4 * 0xc));
          *(undefined4 *)(*(longlong *)(param_4 + 0x18) + 4 + lVar4 * 0xc) = uVar2;
          uVar2 = FUN_01b05600(param_3,*(undefined1 *)
                                        (*(longlong *)(param_4 + 0x18) + 2 + lVar4 * 0xc));
          *(undefined4 *)(*(longlong *)(param_4 + 0x18) + 8 + lVar4 * 0xc) = uVar2;
        }
        else {
          FUN_016ee6b0(param_3,*param_4 + (char)iVar3 + '\x02',1,
                       *(undefined1 *)(*(longlong *)(param_4 + 0x18) + 1 + lVar4 * 0xc),
                       *(undefined1 *)(*(longlong *)(param_4 + 0x18) + 2 + lVar4 * 0xc),
                       *(longlong *)(param_4 + 0x18) + 4 + lVar4 * 0xc,
                       *(longlong *)(param_4 + 0x18) + 8 + lVar4 * 0xc,0);
        }
      }
      else {
        uVar2 = FUN_016ee4b0(param_3,*param_4 + (char)iVar3 + '\x02',1,1,0);
        lVar1 = *(longlong *)(param_4 + 0x18);
        *(undefined4 *)(lVar1 + 4 + lVar4 * 0xc) = uVar2;
        *(undefined4 *)(lVar1 + 8 + lVar4 * 0xc) = 0;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

