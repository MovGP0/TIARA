/* Ghidra address: 01521af0 */
/* Ghidra symbol: FUN_01521af0 */


void FUN_01521af0(longlong param_1,undefined8 param_2,double *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  undefined1 unaff_SIL;
  uint uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  double local_50 [4];
  
  *param_3 = *(double *)PTR_DAT_020011b0;
  uVar3 = (uint)*(byte *)(param_1 + 0x19c50);
  if (uVar3 != 0) {
    plVar4 = (longlong *)(param_1 + 0x1a5d8);
    puVar5 = &DAT_0210ec68;
    do {
      plVar1 = (longlong *)*plVar4;
      if (plVar1 == (longlong *)0x0) {
        unaff_SIL = 0;
      }
      else {
        uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if (uVar2 < 0x3ff) {
          if (uVar2 == 0x3fe) {
LAB_01521bf2:
            unaff_SIL = FUN_014f7dd0(param_2,plVar1,local_50);
            if (local_50[0] < *param_3) {
              *param_3 = local_50[0];
            }
          }
          else {
            if ((uVar2 == 0xe) || (uVar2 == 0x43)) goto LAB_01521bed;
            if (uVar2 == 0x3ec) goto LAB_01521bbe;
          }
        }
        else if (uVar2 == 0x45f) {
LAB_01521bed:
          unaff_SIL = 1;
        }
        else if (uVar2 == 0x4b0) {
LAB_01521bbe:
          unaff_SIL = FUN_00de9350(param_2,plVar1,local_50);
          if (local_50[0] < *param_3) {
            *param_3 = local_50[0];
          }
        }
        else if (uVar2 == 0x4b1) goto LAB_01521bf2;
      }
      *puVar5 = unaff_SIL;
      puVar5 = puVar5 + 1;
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

