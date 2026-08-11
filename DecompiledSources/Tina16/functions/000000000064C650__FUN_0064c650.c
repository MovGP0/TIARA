/* Ghidra address: 0064c650 */
/* Ghidra symbol: FUN_0064c650 */


void FUN_0064c650(longlong *param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  
  bVar1 = *(byte *)((longlong)param_1 + 0xad);
  if (bVar1 != param_2) {
    *(byte *)((longlong)param_1 + 0xad) = param_2;
    uVar5 = (ulonglong)(byte)(&DAT_01df5b28)[param_2];
    FUN_0064c1a0(param_1,uVar5);
    if ((((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) &&
        ((((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0 || (param_1[0xf] != 0)) &&
         (param_2 != 6)))) && (bVar1 != 6)) {
      if (bVar1 < 8) {
        uVar2 = (int)CONCAT71((uint7)(byte)(*(ushort *)((longlong)param_1 + 0x34) >> 8),1) <<
                (bVar1 & 0x1f);
        uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 & 6) != 0);
      }
      else {
        uVar3 = 0;
      }
      if (param_2 < 8) {
        bVar6 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (param_2 & 0x1f) & 0x18U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (SUB81(uVar3,0) == bVar6) {
        if (bVar1 < 8) {
          uVar2 = (int)CONCAT71((int7)(uVar3 >> 8),1) << (bVar1 & 0x1f);
          bVar6 = (uVar2 & 0x21) != 0;
          uVar5 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar6);
        }
        else {
          uVar5 = 0;
          bVar6 = false;
        }
        if (!bVar6) {
          if (param_2 < 8) {
            bVar6 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (param_2 & 0x1f) & 0x21U) != 0;
          }
          else {
            bVar6 = false;
          }
          if (!bVar6) {
            (**(code **)(*param_1 + 400))
                      (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),
                       *(undefined4 *)((longlong)param_1 + 0x9c),(int)param_1[0x13]);
            goto LAB_0064c7be;
          }
        }
      }
      if ((bVar1 == 0) || (param_2 != 0)) {
        pcVar4 = (code *)FUN_00411550(param_1,0xffee);
        (*pcVar4)(param_1);
      }
      else {
        (**(code **)(*param_1 + 400))
                  (param_1,(int)param_1[0x5e],*(undefined4 *)((longlong)param_1 + 0x2f4),
                   (int)param_1[0x5f],*(undefined4 *)((longlong)param_1 + 0x2fc));
      }
    }
  }
LAB_0064c7be:
  (**(code **)(*param_1 + 0x108))(param_1);
  return;
}

