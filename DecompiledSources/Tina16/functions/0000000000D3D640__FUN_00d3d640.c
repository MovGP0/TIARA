/* Ghidra address: 00d3d640 */
/* Ghidra symbol: FUN_00d3d640 */


void FUN_00d3d640(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  int local_30;
  int local_2c;
  
  if ((*(char *)((longlong)param_1 + 0x2a) != '\0') &&
     (cVar1 = FUN_00788df0(param_1), cVar1 != '\0')) {
    uVar2 = FUN_00788400(param_1,param_2);
    *(undefined8 *)(param_2 + 0x18) = uVar2;
    local_30 = (int)*(short *)(param_2 + 0x10);
    local_2c = (int)*(short *)(param_2 + 0x12);
    if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
      FUN_00d3ca40(param_1,local_40);
      cVar1 = FUN_00423210(local_40,&local_30);
      if (cVar1 != '\0') {
        *(undefined8 *)(param_2 + 0x18) = 7;
        cVar1 = FUN_00787c60(param_1[3]);
        if (((cVar1 != '\0') && (cVar1 = FUN_00d3cfd0(param_1), cVar1 == '\0')) &&
           (*(char *)((longlong)param_1 + 0xb5) == '\0')) {
          FUN_00d3cee0(param_1,local_50);
          cVar1 = FUN_00423210(local_50,&local_30);
          if (cVar1 == '\0') {
            FUN_00d3c990(param_1,local_60);
            cVar1 = FUN_00423210(local_60,&local_30);
            if (cVar1 == '\0') {
              FUN_00d3cd00(param_1,local_70);
              cVar1 = FUN_00423210(local_70,&local_30);
              if (cVar1 == '\0') {
                if (((*(char *)((longlong)param_1 + 0xaf) != '\x02') ||
                    ((char)param_1[0x16] != '\x06')) ||
                   (*(char *)((longlong)param_1 + 0xb1) != '\x1a')) {
                  *(undefined1 *)((longlong)param_1 + 0xaf) = 2;
                  *(undefined1 *)(param_1 + 0x16) = 6;
                  *(undefined1 *)((longlong)param_1 + 0xb1) = 0x1a;
                  (**(code **)(*param_1 + 0xa8))(param_1,0);
                }
              }
              else {
                *(undefined1 *)((longlong)param_1 + 0xaf) = 2;
                *(undefined1 *)(param_1 + 0x16) = 6;
                if (*(char *)((longlong)param_1 + 0xb1) != '\x1b') {
                  *(undefined1 *)((longlong)param_1 + 0xb1) = 0x1b;
                  (**(code **)(*param_1 + 0xa8))(param_1,0);
                }
              }
            }
            else {
              *(undefined1 *)((longlong)param_1 + 0xb1) = 0x1a;
              if ((char)param_1[0x16] != '\a') {
                *(undefined1 *)(param_1 + 0x16) = 7;
                (**(code **)(*param_1 + 0xa8))(param_1,0);
              }
            }
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0xb1) = 0x1a;
            if (*(char *)((longlong)param_1 + 0xaf) != '\x03') {
              *(undefined1 *)((longlong)param_1 + 0xaf) = 3;
              (**(code **)(*param_1 + 0xa8))(param_1,0);
            }
          }
        }
      }
    }
    if (*(char *)((longlong)param_1 + 0x7d) != '\0') {
      FUN_00d3c580(param_1,local_80);
      cVar1 = FUN_00423210(local_80,&local_30);
      if (cVar1 != '\0') {
        *(undefined8 *)(param_2 + 0x18) = 6;
        cVar1 = FUN_00787c60(param_1[3]);
        if (((cVar1 != '\0') && (cVar1 = FUN_00d3cf70(param_1), cVar1 == '\0')) &&
           (*(char *)((longlong)param_1 + 0xb5) == '\0')) {
          FUN_00d3c3f0(param_1,local_90);
          cVar1 = FUN_00423210(local_90,&local_30);
          if (cVar1 == '\0') {
            FUN_00d3c9f0(param_1,local_a0);
            cVar1 = FUN_00423210(local_a0,&local_30);
            if (cVar1 == '\0') {
              FUN_00d3c6c0(param_1,local_b0);
              cVar1 = FUN_00423210(local_b0,&local_30);
              if (cVar1 == '\0') {
                if (((*(char *)((longlong)param_1 + 0xb2) != '\n') ||
                    (*(char *)((longlong)param_1 + 0xb3) != '\x0e')) ||
                   (*(char *)((longlong)param_1 + 0xb4) != '\x16')) {
                  *(undefined1 *)((longlong)param_1 + 0xb2) = 10;
                  *(undefined1 *)((longlong)param_1 + 0xb3) = 0xe;
                  *(undefined1 *)((longlong)param_1 + 0xb4) = 0x16;
                  (**(code **)(*param_1 + 0xa0))(param_1,0);
                }
              }
              else {
                *(undefined1 *)((longlong)param_1 + 0xb2) = 10;
                *(undefined1 *)((longlong)param_1 + 0xb3) = 0xe;
                if (*(char *)((longlong)param_1 + 0xb4) != '\x17') {
                  *(undefined1 *)((longlong)param_1 + 0xb4) = 0x17;
                  (**(code **)(*param_1 + 0xa0))(param_1,0);
                }
              }
            }
            else {
              *(undefined1 *)((longlong)param_1 + 0xb4) = 0x16;
              if (*(char *)((longlong)param_1 + 0xb3) != '\x0f') {
                *(undefined1 *)((longlong)param_1 + 0xb3) = 0xf;
                (**(code **)(*param_1 + 0xa0))(param_1,0);
              }
            }
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0xb4) = 0x16;
            if (*(char *)((longlong)param_1 + 0xb2) != '\v') {
              *(undefined1 *)((longlong)param_1 + 0xb2) = 0xb;
              (**(code **)(*param_1 + 0xa0))(param_1,0);
            }
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

