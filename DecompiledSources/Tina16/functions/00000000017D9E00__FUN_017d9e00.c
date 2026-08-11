/* Ghidra address: 017d9e00 */
/* Ghidra symbol: FUN_017d9e00 */


void FUN_017d9e00(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  
  if ((*(char *)(param_1 + 0x18) == '\0') &&
     (FUN_0040d200(*(undefined8 *)(param_1 + 0x1b8),(longlong)(*(int *)(param_1 + 8) * 8),0),
     *(char *)(param_1 + 0x94) == '\x01')) {
    FUN_0040d200(*(undefined8 *)(param_1 + 0x1c0),(longlong)(*(int *)(param_1 + 8) * 8),0);
  }
  if ((*(char *)(param_1 + 0x18) == '\x01') || (*(char *)(param_1 + 0x18) == '\x04')) {
    if (*(char *)(param_1 + 0x94) == '\0') {
      FUN_0040d200(*(undefined8 *)(param_1 + 0x1c8),(longlong)(*(int *)(param_1 + 8) * 8),0);
    }
    else {
      FUN_0040d200(*(undefined8 *)(param_1 + 0x1c8),(longlong)(*(int *)(param_1 + 8) << 4),0);
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    FUN_0040d200(*(undefined8 *)(param_1 + 0x1c8),
                 (longlong)(*(int *)(param_1 + 0xb0) * *(int *)(param_1 + 0xb4)),0);
  }
  if ((*(char *)(param_1 + 0x18) == '\0') && (param_2 == '\0')) {
    iVar8 = *(int *)(param_1 + 8) + -1;
    iVar6 = 1;
    if (0 < iVar8) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x18);
        iVar5 = (int)plVar1[2];
        iVar3 = 0;
        if (-1 < iVar5 + -1) {
          do {
            *(undefined2 *)
             (plVar1[1] + (longlong)*(int *)(*plVar1 + 0x10 + (longlong)iVar3 * 0x18) * 2) = 0xffff;
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_0040d200(*plVar1,(longlong)((int)plVar1[2] * 0x18),0);
        *(undefined4 *)(plVar1 + 2) = 0;
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 0x18);
        iVar5 = (int)plVar1[2];
        iVar3 = 0;
        if (-1 < iVar5 + -1) {
          do {
            *(undefined2 *)(plVar1[1] + (longlong)*(short *)(*plVar1 + (longlong)iVar3 * 2) * 2) =
                 0xffff;
            iVar3 = iVar3 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *(undefined4 *)(plVar1 + 2) = 0;
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  if ((*(char *)(param_1 + 0x18) == '\x01') && (param_2 == '\0')) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      pcVar7 = (code *)0x0;
    }
    else {
      lVar4 = FUN_0041f930();
      *(undefined8 *)(lVar4 + 0x288) = *(undefined8 *)(lVar2 + 0x110);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x110);
      if (*(char *)(lVar2 + 0xe) == '\0') {
        if (*(char *)(lVar2 + 0xd) == '\0') {
          pcVar7 = (code *)0x0;
        }
        else {
          pcVar7 = (code *)0xffffffffffffffff;
          FUN_01663120(lVar2);
        }
      }
      else {
        pcVar7 = FUN_01662ae0;
      }
    }
    thunk_FUN_0408bc57(*(undefined8 *)(param_1 + 0x1d0),pcVar7);
    lVar2 = *(longlong *)(param_1 + 0x10);
    if ((lVar2 != 0) && (*(char *)(*(longlong *)(lVar2 + 0x110) + 0xe) != '\0')) {
      FUN_016632f0(*(undefined8 *)(lVar2 + 0x110));
    }
  }
  if ((*(char *)(param_1 + 0x18) == '\x02') && (param_2 == '\0')) {
    FUN_0040d200(*(undefined8 *)(param_1 + 0xd0),(longlong)*(int *)(param_1 + 0xac),0);
  }
  return;
}

