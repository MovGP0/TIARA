/* Ghidra address: 0108c0f0 */
/* Ghidra symbol: FUN_0108c0f0 */


void FUN_0108c0f0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_80;
  undefined1 local_71;
  undefined8 local_70 [3];
  uint local_58;
  
  local_80 = 0;
  FUN_00417580(local_70,&DAT_010571b8);
  FUN_0043e1a0(&local_80,*(undefined8 *)(param_1 + 0xb38));
  FUN_01055a50(*(undefined8 *)(*(longlong *)(param_1 + 0xbf0) + 0x48),local_80,param_1 + 0x4d18,
               &local_71,*(undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0x108));
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x9c0),1);
  FUN_007e2f80(*(undefined8 *)(param_1 + 0x9c0),1);
  FUN_007e4130();
  if ((*(int *)(param_1 + 0xad8) == 0x2000) || (*(int *)(param_1 + 0xad8) == 0x4000)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar6 = 0;
  if (*(longlong *)(param_1 + 0x4d18) != 0) {
    iVar6 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x4d18) + -8);
  }
  iVar5 = 0;
  if (iVar6 - 1U < 0x80000000) {
    do {
      cVar2 = FUN_010637f0(*(undefined8 *)(param_1 + 0xbf0),
                           *(undefined4 *)(*(longlong *)(param_1 + 0x4d18) + (longlong)iVar5 * 4),
                           local_70);
      if ((cVar2 != '\0') &&
         (((uVar3 = FUN_0040c770(*(double *)(*(longlong *)(param_1 + 0xad0) + 0x108) / 1000000.0),
           local_58 == uVar3 && (!bVar1)) || (bVar1)))) {
        lVar4 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(param_1 + 0x830));
        FUN_007e2c60(lVar4,local_70[0]);
        *(longlong *)(lVar4 + 0x118) = param_1;
        *(code **)(lVar4 + 0x110) = FUN_0108c370;
        *(longlong *)(lVar4 + 0x18) =
             (longlong)*(int *)(*(longlong *)(param_1 + 0x4d18) + (longlong)iVar5 * 4);
        if (*(int *)(param_1 + 0xaa0) < 0) {
          if (iVar5 == 0) {
            FUN_007e2d20(lVar4,1);
          }
        }
        else if (*(longlong *)(lVar4 + 0x18) == (longlong)*(int *)(param_1 + 0xaa0)) {
          FUN_007e2d20(lVar4,1);
        }
        FUN_007e34c0(*(undefined8 *)(param_1 + 0x9c0),lVar4);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414480(&local_80);
  FUN_00417740(local_70,&DAT_010571b8);
  return;
}

