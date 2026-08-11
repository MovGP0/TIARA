/* Ghidra address: 018482d0 */
/* Ghidra symbol: FUN_018482d0 */


void FUN_018482d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 0x118) = *(undefined8 *)(param_2 + 0xb8);
  }
  *(undefined1 *)(*(longlong *)(param_2 + 0x100) + 0x88) = *(undefined1 *)(param_2 + 0xb7);
  if ((*(longlong *)(param_2 + 0xc0) != 0) &&
     (*(char *)(*(longlong *)(param_2 + 0xc0) + 0x152) != '\0')) {
    iVar2 = FUN_0184caf0();
    *(undefined4 *)(param_2 + 0xac) = 0;
    if (*(int *)(param_2 + 0xac) <= iVar2 + -1) {
      do {
        uVar4 = FUN_0184cd80(*(undefined8 *)(*(longlong *)(param_2 + 0x100) + 0x90),
                             *(undefined4 *)(param_2 + 0xac));
        cVar1 = FUN_004113d0(uVar4,&DAT_01843700);
        if (cVar1 != '\0') {
          lVar5 = FUN_0184cd80(*(undefined8 *)(*(longlong *)(param_2 + 0x100) + 0x90),
                               *(undefined4 *)(param_2 + 0xac));
          iVar3 = FUN_0043e420(L"Result",*(undefined8 *)(lVar5 + 0x20));
          if (iVar3 != 0) {
            plVar6 = (longlong *)
                     FUN_0184cd80(*(undefined8 *)(*(longlong *)(param_2 + 0x100) + 0x90),
                                  *(undefined4 *)(param_2 + 0xac));
            (**(code **)(*plVar6 + 0x10))(plVar6,param_2 + 0x68);
            cVar1 = FUN_0046c280(param_2 + 0x68);
            if (cVar1 == '\0') {
              lVar5 = FUN_0184cd80(*(undefined8 *)(*(longlong *)(param_2 + 0x100) + 0x90),
                                   *(undefined4 *)(param_2 + 0xac));
              cVar1 = *(char *)(lVar5 + 0x48);
              if ((cVar1 == '\0') || ((byte)(cVar1 - 2U) < 2)) {
                plVar6 = (longlong *)
                         FUN_0184cd80(*(undefined8 *)(*(longlong *)(param_2 + 0x100) + 0x90),
                                      *(undefined4 *)(param_2 + 0xac));
                FUN_00468530(param_2 + 0x38,0,1);
                (**(code **)(*plVar6 + 8))(plVar6,param_2 + 0x38);
              }
              else if (cVar1 == '\x04') {
                plVar6 = (longlong *)
                         FUN_0184cd80(*(undefined8 *)(*(longlong *)(param_2 + 0x100) + 0x90),
                                      *(undefined4 *)(param_2 + 0xac));
                FUN_00468a10(param_2 + 0x50,0);
                (**(code **)(*plVar6 + 8))(plVar6,param_2 + 0x50);
              }
              else if (cVar1 == '\a') {
                plVar6 = (longlong *)
                         FUN_0184cd80(*(undefined8 *)(*(longlong *)(param_2 + 0x100) + 0x90),
                                      *(undefined4 *)(param_2 + 0xac));
                FUN_0046f180(param_2 + 0x20);
                (**(code **)(*plVar6 + 8))(plVar6,param_2 + 0x20);
              }
            }
          }
        }
        *(int *)(param_2 + 0xac) = *(int *)(param_2 + 0xac) + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

