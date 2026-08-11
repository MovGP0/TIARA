/* Ghidra address: 01331ae0 */
/* Ghidra symbol: FUN_01331ae0 */


void FUN_01331ae0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x30))
                        (*(longlong **)(param_1 + 0x130),iVar4);
      *(undefined1 *)(lVar3 + 0x48) = 0;
      if ((*(char *)(lVar3 + 0x18) != '\x02') ||
         (*(double *)(lVar3 + 0x10) < *(double *)(param_1 + 0x118))) {
        if ((*(char *)(lVar3 + 0x18) == '\x01') &&
           ((*(double *)(param_1 + 0x110) <= *(double *)(lVar3 + 0x10) ||
            (cVar1 = FUN_01330f80(*(undefined8 *)(lVar3 + 8),L"CSENSOR"), cVar1 != '\0')))) {
          (**(code **)(**(longlong **)(param_1 + 0x138) + 0x80))
                    (*(longlong **)(param_1 + 0x138),*(undefined8 *)(lVar3 + 8),lVar3);
          *(undefined1 *)(lVar3 + 0x48) = 1;
        }
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x138) + 0x80))
                  (*(longlong **)(param_1 + 0x138),*(undefined8 *)(lVar3 + 8),lVar3);
        *(undefined1 *)(lVar3 + 0x48) = 1;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

