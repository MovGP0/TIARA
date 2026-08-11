/* Ghidra address: 01444670 */
/* Ghidra symbol: FUN_01444670 */


void FUN_01444670(longlong param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = *(byte **)(param_1 + 8);
  do {
    if (pbVar1 == (byte *)0x0) {
      *(undefined2 *)(param_1 + 0x10) = 0xb;
      return;
    }
    uVar2 = (ulonglong)*pbVar1;
    if (uVar2 < 0x1e) {
      if (uVar2 < 0x11) {
        if (uVar2 - 9 < 3) {
LAB_0144475b:
          FUN_004095f0(*(undefined8 *)(pbVar1 + 0xa8));
        }
        else if (uVar2 == 0xc) {
          FUN_004095f0(*(undefined8 *)(pbVar1 + 0xa8));
        }
        else if (uVar2 - 0xd < 4) {
LAB_01444747:
          FUN_004095f0(*(undefined8 *)(pbVar1 + 0xa8));
        }
      }
      else {
        if (uVar2 - 0x11 < 4) goto LAB_0144475b;
        if (uVar2 - 0x18 < 2) {
LAB_0144477d:
          if (pbVar1[0xa5] == 3) {
            FUN_004095f0(*(undefined8 *)(pbVar1 + 0xa8));
          }
        }
        else if (uVar2 - 0x1a < 4) goto LAB_0144479d;
      }
    }
    else if (uVar2 < 0x59) {
      if (uVar2 - 0x1e < 2) {
LAB_014447bd:
        if (pbVar1[0xa5] == 2) {
          FUN_004095f0(*(undefined8 *)(pbVar1 + 0xa8));
        }
      }
      else {
        if (uVar2 - 0x25 < 2) goto LAB_0144475b;
        if (uVar2 - 0x57 < 2) goto LAB_0144477d;
      }
    }
    else if (uVar2 - 0x59 < 4) {
LAB_0144479d:
      if (pbVar1[0xa5] == 8) {
        FUN_004095f0(*(undefined8 *)(pbVar1 + 0xa8));
      }
    }
    else {
      if (uVar2 - 0x5d < 2) goto LAB_014447bd;
      if (uVar2 - 0xd9 < 2) goto LAB_01444747;
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0);
    FUN_004095f0(pbVar1);
    pbVar1 = *(byte **)(param_1 + 8);
  } while( true );
}

