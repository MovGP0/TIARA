/* Ghidra address: 00bc71a0 */
/* Ghidra symbol: FUN_00bc71a0 */


ulonglong FUN_00bc71a0(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined8 unaff_RDI;
  undefined6 uVar5;
  ulonglong uVar4;
  
  uVar1 = *(ushort *)*param_2;
  uVar5 = (undefined6)((ulonglong)unaff_RDI >> 0x10);
  if (uVar1 < 0x6f) {
    if (uVar1 == 0x6e) {
      uVar4 = CONCAT62(uVar5,10);
      goto LAB_00bc732a;
    }
    if (uVar1 == 0x61) {
      uVar4 = CONCAT62(uVar5,7);
      goto LAB_00bc732a;
    }
    if (uVar1 == 0x65) {
      uVar4 = CONCAT62(uVar5,0x1b);
      goto LAB_00bc732a;
    }
    if (uVar1 == 0x66) {
      uVar4 = CONCAT62(uVar5,0xc);
      goto LAB_00bc732a;
    }
  }
  else {
    if (uVar1 == 0x72) {
      uVar4 = CONCAT62(uVar5,0xd);
      goto LAB_00bc732a;
    }
    if (uVar1 == 0x74) {
      uVar4 = CONCAT62(uVar5,9);
      goto LAB_00bc732a;
    }
    if (uVar1 == 0x78) {
      uVar4 = 0;
      *param_2 = *param_2 + 2;
      if (*(short *)*param_2 == 0) {
        (**(code **)**(undefined8 **)(param_1 + 0x90))(*(undefined8 **)(param_1 + 0x90),0x6f);
      }
      else if (*(short *)*param_2 == 0x7b) {
        while (*param_2 = *param_2 + 2, *(short *)*param_2 != 0) {
          if (*(short *)*param_2 == 0x7d) goto LAB_00bc732a;
          if ((uVar4 & 0xffff) >> 0xc != 0) {
            (**(code **)**(undefined8 **)(param_1 + 0x90))(*(undefined8 **)(param_1 + 0x90),0x70);
            goto LAB_00bc732a;
          }
          uVar1 = FUN_00bc7060(param_1,*(undefined2 *)*param_2);
          iVar3 = (int)uVar4 << 4;
          uVar4 = (ulonglong)CONCAT22((short)((uint)iVar3 >> 0x10),(ushort)iVar3 | uVar1);
        }
        (**(code **)**(undefined8 **)(param_1 + 0x90))(*(undefined8 **)(param_1 + 0x90),0x6f);
      }
      else {
        uVar2 = FUN_00bc7060(param_1,*(short *)*param_2);
        uVar4 = (ulonglong)uVar2;
        *param_2 = *param_2 + 2;
        if (*(short *)*param_2 == 0) {
          (**(code **)**(undefined8 **)(param_1 + 0x90))(*(undefined8 **)(param_1 + 0x90),0x6f);
        }
        else {
          uVar1 = FUN_00bc7060(param_1,*(undefined2 *)*param_2);
          uVar4 = (ulonglong)CONCAT22((short)((uVar2 << 4) >> 0x10),(ushort)(uVar2 << 4) | uVar1);
        }
      }
      goto LAB_00bc732a;
    }
  }
  uVar4 = (ulonglong)uVar1;
LAB_00bc732a:
  return uVar4 & 0xffffffff;
}

