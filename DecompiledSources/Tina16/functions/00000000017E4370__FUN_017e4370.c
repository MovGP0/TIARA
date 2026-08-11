/* Ghidra address: 017e4370 */
/* Ghidra symbol: FUN_017e4370 */


void FUN_017e4370(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_3 == '\0') || (*(int *)(param_2 + 0x238) != 1)) {
    if ((param_3 == '\0') || (*(int *)(param_2 + 0x238) == 1)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xee0) + 0x370);
      *piVar1 = *piVar1 + 1;
      iVar2 = *(int *)(*(longlong *)(param_1 + 0xee0) + 0x370);
      if (iVar2 < *(int *)(param_2 + 0x238) + -1) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x468 + (longlong)iVar2 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x418 + (longlong)(iVar2 + -1) * 8);
        lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xee0) + 0x370);
        *(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x418 + lVar3 * 8) =
             *(undefined8 *)(param_2 + 0x120 + lVar3 * 8);
      }
      else {
        *(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x468 + (longlong)iVar2 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x418 + (longlong)(iVar2 + -1) * 8);
        *(undefined8 *)
         (*(longlong *)(param_1 + 0xee0) + 0x418 +
         (longlong)*(int *)(*(longlong *)(param_1 + 0xee0) + 0x370) * 8) =
             *(undefined8 *)(param_2 + 0xd8);
      }
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0xee0) + 0x370) = 0;
      *(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x468) = *(undefined8 *)(param_2 + 0xd0);
      lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xee0) + 0x370);
      *(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x418 + lVar3 * 8) =
           *(undefined8 *)(param_2 + 0x120 + lVar3 * 8);
    }
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0xee0) + 0x370) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xee0) + 0x468) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)
     (*(longlong *)(param_1 + 0xee0) + 0x418 +
     (longlong)*(int *)(*(longlong *)(param_1 + 0xee0) + 0x370) * 8) =
         *(undefined8 *)(param_2 + 0xd8);
    *(undefined4 *)
     (param_2 + 0x210 + (longlong)*(int *)(*(longlong *)(param_1 + 0xee0) + 0x370) * 4) =
         *(undefined4 *)(param_2 + 0xe0);
  }
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0xee0) + 0x370);
  *(undefined4 *)(*(longlong *)(param_1 + 0xee0) + 0x4b8 + lVar3 * 4) =
       *(undefined4 *)(param_2 + 0x210 + lVar3 * 4);
  *(undefined4 *)(*(longlong *)(param_1 + 0xee0) + 0x4e0) = *(undefined4 *)(param_2 + 0x238);
  *(undefined4 *)(param_1 + 0xe7c) = 0;
  return;
}

