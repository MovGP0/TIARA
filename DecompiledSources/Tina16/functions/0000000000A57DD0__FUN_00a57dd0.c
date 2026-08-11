/* Ghidra address: 00a57dd0 */
/* Ghidra symbol: FUN_00a57dd0 */


void FUN_00a57dd0(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  if ((param_2 != 0) && (0 < *(int *)(param_2 + 0x10))) {
    iVar6 = *(int *)(param_2 + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar3 = FUN_00a72910(param_2,iVar5);
        bVar1 = *(byte *)(lVar3 + 8);
        if (bVar1 < 10) {
          if (bVar1 == 9) {
            FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x348,
                         *(undefined8 *)(lVar3 + 0x28));
            FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x360,
                         *(undefined8 *)(lVar3 + 0x28));
            FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x378,
                         *(undefined8 *)(lVar3 + 0x28));
            FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x390,
                         *(undefined8 *)(lVar3 + 0x28));
          }
          else if (bVar1 == 3) {
            uVar4 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x1b0) + 0xa0);
            if (uVar4 < 0xa5) {
              if (((uVar4 == 0xa4) || (uVar4 - 0x66 < 2)) ||
                 ((uVar4 - 0x77 < 6 || (uVar4 - 0x77 == 0x2b)))) {
LAB_00a57ed8:
                iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x28),L"char");
                if (iVar2 == 0) {
                  FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0xd8,L"right")
                  ;
                }
                else {
                  FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0xd8,
                               *(undefined8 *)(lVar3 + 0x28));
                }
              }
            }
            else if (((uVar4 - 0xa7 < 3) || (uVar4 == 0xad)) || (uVar4 - 0xaf < 2))
            goto LAB_00a57ed8;
          }
          else if (bVar1 == 8) {
            FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x2e8,
                         *(undefined8 *)(lVar3 + 0x28));
            FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x300,
                         *(undefined8 *)(lVar3 + 0x28));
            FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x318,
                         *(undefined8 *)(lVar3 + 0x28));
            FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x330,
                         *(undefined8 *)(lVar3 + 0x28));
          }
        }
        else if (bVar1 == 0xd) {
          FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x498,
                       *(undefined8 *)(lVar3 + 0x28));
          FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x4b0,
                       *(undefined8 *)(lVar3 + 0x28));
        }
        else if (bVar1 == 0x59) {
          FUN_00468a10(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x90) + 0x4f8,
                       *(undefined8 *)(lVar3 + 0x28));
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

