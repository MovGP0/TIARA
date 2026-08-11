/* Ghidra address: 00d3dfa0 */
/* Ghidra symbol: FUN_00d3dfa0 */


void FUN_00d3dfa0(longlong *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *param_2;
  if (iVar1 < 0x201) {
    if (iVar1 == 0x200) {
LAB_00d3e0ea:
      if ((*(char *)((longlong)param_1 + 0x2a) != '\0') &&
         (cVar2 = FUN_00788df0(param_1), cVar2 != '\0')) {
        if (((((*(char *)((longlong)param_1 + 0x7c) != '\0') &&
              (cVar2 = FUN_00787c60(param_1[3]), cVar2 != '\0')) &&
             (*(char *)((longlong)param_1 + 0xb5) == '\0')) &&
            (cVar2 = FUN_00d3cfd0(param_1), cVar2 == '\0')) &&
           (((*(char *)((longlong)param_1 + 0xaf) != '\x02' || ((char)param_1[0x16] != '\x06')) ||
            (*(char *)((longlong)param_1 + 0xb1) != '\x1a')))) {
          *(undefined1 *)((longlong)param_1 + 0xaf) = 2;
          *(undefined1 *)(param_1 + 0x16) = 6;
          *(undefined1 *)((longlong)param_1 + 0xb1) = 0x1a;
          (**(code **)(*param_1 + 0xa8))(param_1,0);
        }
        if ((((*(char *)((longlong)param_1 + 0x7d) != '\0') &&
             (cVar2 = FUN_00787c60(param_1[3]), cVar2 != '\0')) &&
            ((*(char *)((longlong)param_1 + 0xb5) == '\0' &&
             (cVar2 = FUN_00d3cf70(param_1), cVar2 == '\0')))) &&
           (((*(char *)((longlong)param_1 + 0xb2) != '\n' ||
             (*(char *)((longlong)param_1 + 0xb3) != '\x0e')) ||
            (*(char *)((longlong)param_1 + 0xb4) != '\x16')))) {
          *(undefined1 *)((longlong)param_1 + 0xb2) = 10;
          *(undefined1 *)((longlong)param_1 + 0xb3) = 0xe;
          *(undefined1 *)((longlong)param_1 + 0xb4) = 0x16;
          (**(code **)(*param_1 + 0xa0))(param_1,0);
        }
        FUN_007899d0(param_1,param_2);
        return;
      }
      FUN_00788400(param_1,param_2);
      return;
    }
    if (iVar1 == 0xf) {
      if ((*(char *)((longlong)param_1 + 0x2a) == '\0') ||
         (cVar2 = FUN_00788df0(param_1), cVar2 == '\0')) {
        FUN_00788400(param_1,param_2);
        return;
      }
      FUN_007899d0(param_1,param_2);
      if (*(char *)((longlong)param_1 + 0xac) != '\0') {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x2a) == '\0') {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
        (**(code **)(*param_1 + 0xa8))(param_1,0);
      }
      if (*(char *)((longlong)param_1 + 0x7d) == '\0') {
        return;
      }
      (**(code **)(*param_1 + 0xa0))(param_1,0);
      return;
    }
    if (iVar1 == 0x113) {
      if (*(longlong *)(param_2 + 2) != 10) {
        FUN_007899d0(param_1,param_2);
        return;
      }
      iVar1 = (int)param_1[0xf];
      if (iVar1 == 1) {
        FUN_00d3b160(param_1);
        return;
      }
      if (iVar1 == 2) {
        FUN_00d3b1a0(param_1);
        return;
      }
      if (iVar1 != 3) {
        return;
      }
      FUN_00d3b220(param_1);
      return;
    }
    if (iVar1 - 0x114U < 2) {
      if ((short)param_2[2] == 4) {
        *(ulonglong *)(param_2 + 2) = (ulonglong)((uint)*(ushort *)(param_1 + 0x17) << 0x10 | 4);
        FUN_00788400(param_1,param_2);
        return;
      }
      if ((*(char *)((longlong)param_1 + 0x2a) != '\0') &&
         (cVar2 = FUN_00788df0(param_1), cVar2 != '\0')) {
        FUN_007899d0(param_1,param_2);
        return;
      }
      FUN_00788400(param_1,param_2);
      return;
    }
  }
  else {
    if (iVar1 == 0x20a) {
      FUN_007899d0(param_1,param_2);
      if (*(char *)((longlong)param_1 + 0x7c) == '\0') {
        return;
      }
      (**(code **)(*param_1 + 0xa8))(param_1,0);
      return;
    }
    if (iVar1 == 0x2a2) goto LAB_00d3e0ea;
  }
  FUN_007899d0(param_1,param_2);
  return;
}

