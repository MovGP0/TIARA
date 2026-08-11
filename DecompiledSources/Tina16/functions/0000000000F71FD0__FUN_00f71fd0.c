/* Ghidra address: 00f71fd0 */
/* Ghidra symbol: FUN_00f71fd0 */


void FUN_00f71fd0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40 [2];
  undefined4 local_2c [3];
  
  local_40[0] = 0;
  FUN_00f6f9c0(param_1,param_2);
  FUN_004b89e0(param_2,param_1 + 0x120,4);
  FUN_004b89e0(param_2,param_1 + 0x126,1);
  FUN_004b89e0(param_2,param_1 + 0x125,1);
  FUN_00f608e0(param_2,*(undefined8 *)(param_1 + 0x110));
  FUN_00f608e0(param_2,*(undefined8 *)(param_1 + 0x118));
  FUN_004b89e0(param_2,param_1 + 0x124,1);
  if (*(char *)(param_1 + 0x30) == '\v') {
    FUN_004b89e0(param_2,param_1 + 0x128,1);
    FUN_004b89e0(param_2,param_1 + 0x129,1);
    FUN_00f608e0(param_2,*(undefined8 *)(param_1 + 0x130));
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 1) {
      if (*(char *)(param_1 + 0x129) == '\x01') {
        FUN_004b89e0(param_2,param_1 + 0x170,4);
        FUN_004b89e0(param_2,param_1 + 0x174,1);
        FUN_004b89e0(param_2,param_1 + 0x178,4);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x129);
        if (((cVar1 == '\x05') || (cVar1 == '\r')) || (cVar1 == '\f')) {
          FUN_004b89e0(param_2,param_1 + 0x170,0xc);
        }
        else if (cVar1 == '\x02') {
          FUN_004b89e0(param_2,param_1 + 0x17c,0x30);
          if (*(char *)(param_1 + 0x1a8) != '\0') {
            FUN_004b89e0(param_2,param_1 + 0x3e0,0xc);
          }
        }
        else if (cVar1 == '\x0e') {
          FUN_004b89e0(param_2,param_1 + 0x17c,0x30);
          FUN_004b89e0(param_2,param_1 + 0x170,0xc);
          if (*(char *)(param_1 + 0x1a8) != '\0') {
            FUN_004b89e0(param_2,param_1 + 0x3e0,0xc);
          }
        }
        else {
          cVar1 = *(char *)(param_1 + 0x129);
          if ((cVar1 == '\v') || (cVar1 == '\x1f')) {
            FUN_004b89e0(param_2,param_1 + 0x1ac,0x40);
            FUN_004b89e0(param_2,param_1 + 0x17c,0x30);
            FUN_004b89e0(param_2,param_1 + 0x170,0xc);
            if (*(char *)(param_1 + 0x1a8) != '\0') {
              FUN_004b89e0(param_2,param_1 + 0x3e0,0xc);
            }
          }
          else if (cVar1 == '\x03') {
            FUN_004b89e0(param_2,param_1 + 0x1ac,0x40);
          }
          else if (cVar1 == '\x04') {
            FUN_004b89e0(param_2,param_1 + 0x148,0x28);
          }
          else if (cVar1 == '\x06') {
            FUN_004b89e0(param_2,param_1 + 0x380,0x60);
          }
          else if (cVar1 == '\a') {
            FUN_004b89e0(param_2,param_1 + 0x380,0x60);
          }
        }
      }
    }
    else if (iVar3 == 8) {
      bVar2 = *(byte *)(param_1 + 0x129) & 0x7f;
      if (bVar2 == 1) {
        FUN_004b89e0(param_2,param_1 + 0x170,0xc);
      }
      else if (((bVar2 == 5) || (bVar2 == 0xd)) || (bVar2 == 0xc)) {
        FUN_004b89e0(param_2,param_1 + 0x170,0xc);
      }
      else if (bVar2 == 8) {
        FUN_004b89e0(param_2,param_1 + 0x170,0xc);
      }
      else if (bVar2 == 9) {
        FUN_004b89e0(param_2,param_1 + 0x170,0xc);
      }
      else if (bVar2 == 10) {
        FUN_004b89e0(param_2,param_1 + 0x170,0xc);
      }
      else if (bVar2 == 2) {
        FUN_004b89e0(param_2,param_1 + 0x17c,0x30);
        if (*(char *)(param_1 + 0x1a8) != '\0') {
          FUN_004b89e0(param_2,param_1 + 0x3e0,0xc);
        }
      }
      else if (bVar2 == 0xe) {
        FUN_004b89e0(param_2,param_1 + 0x17c,0x30);
        FUN_004b89e0(param_2,param_1 + 0x170,0xc);
        if (*(char *)(param_1 + 0x1a8) != '\0') {
          FUN_004b89e0(param_2,param_1 + 0x3e0,0xc);
        }
      }
      else if ((bVar2 == 0xb) || (bVar2 == 0x1f)) {
        FUN_004b89e0(param_2,param_1 + 0x1ac,0x40);
        FUN_004b89e0(param_2,param_1 + 0x17c,0x30);
        FUN_004b89e0(param_2,param_1 + 0x170,0xc);
        if (*(char *)(param_1 + 0x1a8) != '\0') {
          FUN_004b89e0(param_2,param_1 + 0x3e0,0xc);
        }
      }
      else if (bVar2 == 3) {
        FUN_004b89e0(param_2,param_1 + 0x1ac,0x40);
      }
      else if (bVar2 == 0xf) {
        FUN_004b89e0(param_2,param_1 + 0x1ec,0x78);
      }
      else if (bVar2 == 0x10) {
        FUN_004b89e0(param_2,param_1 + 0x264,0x78);
      }
      else if (bVar2 == 0x11) {
        FUN_004b89e0(param_2,param_1 + 0x2dc,0x78);
      }
      else if (bVar2 == 4) {
        FUN_004b89e0(param_2,param_1 + 0x358,0x28);
      }
      else if (bVar2 == 6) {
        FUN_004b89e0(param_2,param_1 + 0x380,0x60);
      }
      else if (bVar2 == 7) {
        FUN_004b89e0(param_2,param_1 + 0x380,0x60);
      }
    }
    else if (iVar3 == 4) {
      cVar1 = *(char *)(param_1 + 0x129);
      if (cVar1 == '\t') {
        FUN_004b89e0(param_2,param_1 + 0x3f0,8);
      }
      else if (cVar1 == '\x01') {
        FUN_004b89e0(param_2,param_1 + 0x3f0,8);
      }
      else if (cVar1 == '\x02') {
        FUN_004b89e0(param_2,param_1 + 0x3f0,8);
      }
      else if (cVar1 == '\x11') {
        FUN_004b89e0(param_2,param_1 + 0x3f0,8);
      }
      else if (cVar1 == '\x12') {
        FUN_004b89e0(param_2,param_1 + 0x3f0,8);
      }
      else if (cVar1 == '\x13') {
        FUN_004b89e0(param_2,param_1 + 0x3f0,8);
      }
      else if (cVar1 == '\x14') {
        FUN_004b89e0(param_2,param_1 + 0x3f0,8);
      }
      else if (cVar1 == '\x15') {
        FUN_004b89e0(param_2,param_1 + 0x3f0,8);
      }
      else if (cVar1 == '\x16') {
        FUN_004b89e0(param_2,param_1 + 0x3f0,8);
      }
      else if (cVar1 == '\b') {
        FUN_004b89e0(param_2,param_1 + 0x3f8,0x38);
      }
      else if (cVar1 == '\x06') {
        FUN_004b89e0(param_2,param_1 + 0x3f8,0x38);
      }
      else if (cVar1 == '\a') {
        FUN_004b89e0(param_2,param_1 + 0x3f8,0x38);
      }
      else if (cVar1 == '\x05') {
        FUN_004b89e0(param_2,param_1 + 0x3f8,0x38);
      }
      else if (cVar1 == '\x04') {
        FUN_004b89e0(param_2,param_1 + 0x430,0x1c);
      }
      else if (cVar1 == '\x03') {
        FUN_004b89e0(param_2,param_1 + 0x430,0x1c);
      }
      else if (cVar1 == '#') {
        FUN_004b89e0(param_2,param_1 + 0x450,0x30);
      }
      else if (cVar1 == '\v') {
        FUN_004b89e0(param_2,param_1 + 0x480,0x68);
      }
      else if (cVar1 == '\r') {
        FUN_004b89e0(param_2,param_1 + 0x480,0x68);
      }
    }
    else if (iVar3 == 2) {
      cVar1 = *(char *)(param_1 + 0x129);
      if (cVar1 == '\x01') {
        FUN_004b89e0(param_2,param_1 + 0x4e8,0x10);
      }
      else if (cVar1 == '\x02') {
        FUN_004b89e0(param_2,param_1 + 0x4e8,0x10);
      }
      else if (cVar1 == '\x06') {
        FUN_004b89e0(param_2,param_1 + 0x4e8,0x10);
      }
      else if (cVar1 == '\x05') {
        FUN_004b89e0(param_2,param_1 + 0x4f8,0x10);
      }
      else if (cVar1 == '\x04') {
        FUN_004b89e0(param_2,param_1 + 0x508,0x14);
      }
      else if (cVar1 == '\x03') {
        FUN_004b89e0(param_2,param_1 + 0x508,0x14);
      }
      else if (cVar1 == '\a') {
        FUN_004b89e0(param_2,param_1 + 0x520,0x30);
      }
      else if (cVar1 == '\t') {
        FUN_004b89e0(param_2,param_1 + 0x550,0x68);
        FUN_004b89e0(param_2,param_1 + 0x4f8,0x10);
        FUN_004b89e0(param_2,param_1 + 0x508,0x14);
      }
      else if (cVar1 == '\b') {
        FUN_004b89e0(param_2,param_1 + 0x550,0x68);
        FUN_004b89e0(param_2,param_1 + 0x4f8,0x10);
        FUN_004b89e0(param_2,param_1 + 0x508,0x14);
      }
    }
  }
  else if (*(char *)(param_1 + 0x30) == '\f') {
    local_2c[0] = (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x28))
                            (*(longlong **)(param_1 + 0x5c0));
    FUN_004b89e0(param_2,local_2c,4);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x28))();
    iVar4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x5c0) + 0x18))
                  (*(longlong **)(param_1 + 0x5c0),local_40,iVar4);
        FUN_00f608e0(param_2,local_40[0]);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414480(local_40);
  return;
}

